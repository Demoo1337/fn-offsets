__forceinline Vector3 GetBoneLocation(uintptr_t mesh, int bone_id)
{
	uintptr_t bone_array = driver.read<uintptr_t>(mesh + OFFSETS::boneArray);
	if (bone_array == NULL) bone_array = driver.read<uintptr_t>(mesh + OFFSETS::boneArray + 0x10);
	FTransform bone = driver.read<FTransform>(bone_array + (bone_id * 0x60));
	FTransform component_to_world = driver.read<FTransform>(mesh + OFFSETS::component_to_world);
	D3DMATRIX matrix = MatrixMultiplication(bone.ToMatrixWithScale(), component_to_world.ToMatrixWithScale());
	return Vector3(matrix._41, matrix._42, matrix._43);
}
