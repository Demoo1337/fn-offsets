CameraInfo GetCameraInfo()
{
	CameraInfo camera;
	auto location_pointer = driver.read<uintptr_t>(Undetected->uworld + 0x110);
	auto rotation_pointer = driver.read<uintptr_t>(Undetected->uworld + 0x120);

	struct RotationInfo
	{
		double pitch;
		char pad_0008[24];
		double yaw;
		char pad_0028[424];
		double roll;
	} rotationInfo;

	rotationInfo.pitch = driver.read<double>(rotation_pointer);
	rotationInfo.yaw = driver.read<double>(rotation_pointer + 0x20);
	rotationInfo.roll = driver.read<double>(rotation_pointer + 0x1d0);

	camera.location = driver.read<Vector3>(location_pointer);
	camera.rotation.x = asin(rotationInfo.roll) * (180.0 / M_PI);
	camera.rotation.y = ((atan2(rotationInfo.pitch * -1, rotationInfo.yaw) * (180.0 / M_PI)) * -1) * -1;
	camera.fov = driver.read<float>((uintptr_t)Undetected->player_controller + 0x394) * 90.f;

	return camera;
}
