enum OFFSETS {

    UWORLD = 0x11FD3D78, //updated
    game_instance = 0x1D8,//updated
    game_state = 0x160,//updated
    local_player = 0x38,//updated
    OwningWorld = 0xc0,
    persistent_level = 0x30,
    player_controller = 0x30,//updated
    acknowledged_pawn = 0x338, //updated //LocalPawn
    skeletal_mesh = 0x310, //updated //Actor Mesh
    player_state = 0x2B0, //updated
    root_component = 0x198, //updated
    velocity = 0x168, //updated
    relative_location = 0x120, //updated
    relative_rotation = 0x138, //updated
    team_index = 0x1201, //updated
    player_array = 0x2a8, //updated
    pawn_private = 0x308, //updated
    component_to_world = 0x1c0, // c2w //updated
    LocalActorPos = 0x120, //updated
    CameraManager = 0x348, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerController&member=PlayerCameraManager

    bIsABot = 0x29a, //is Bot    //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerState&member=bIsABot
    bIsDBNO = 0x8f2, //Is Knocked    //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=bIsDBNO

    LastSubmitTime = 0x2E0, // Visible Check
    LastRenderTimeOnScreen = 0x2E8, // Visible Check

    //Exploits
    bUseGravity = 0x87a, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortAthenaVehicle&member=bUseGravity
    CurrentVehicle = 0x2a10, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawn&member=CurrentVehicle
    DefaultFOV = 0x2a4, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerCameraManager&member=DefaultFOV
    CustomTimeDilation = 0x68, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AActor&member=CustomTimeDilation
    bADSWhileNotOnGround = 0x55e9, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawnAthena&member=bADSWhileNotOnGround
    GlobalAnimRateScale = 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USkeletalMeshComponent&member=GlobalAnimRateScale


    //bone
    boneArray = 0x570, //updated
    boneCache = 0x600, //updated

    //Extra
    Platform = 0x3f0,  // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerState&member=Platform
    Habenero = 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerState&member=HabaneroComponent
    rankProgress = 0xb8, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UFortPlayerStateComponent_Habanero&member=RankedProgress
    rank = 0x10, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=structs&idx=FRankedProgressReplicatedData&member=Rank
    Username = 0xA98, //updated
    UsernameLenght = 0x10,  //updated
    UsernameEncryptedBuffer = 0x8,  //updated
    killsCount = 0x1214,  // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=KillScore
};

enum WeaponOffsets {

    CurrentWeapon = 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=CurrentWeapon
    AmmoCount = 0xf0c, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=AmmoCount
    WeaponData = 0x510, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=WeaponData
    bIsReloadingWeapon = 0x399, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=bIsReloadingWeapon
    Tier = 0xa2, // updated 
    ItemName = 0x40,  // updated 
    bDisableEquipAnimation = 0x39a, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=bDisableEquipAnimation
};

enum boneID : int {
	Head = 110,
	Neck = 67,
	LHand = 11,
	RHand = 40,
	RElbow = 39,
	LElbow = 10,
	LShoulder = 9,
	RShoulder = 38,
	Chest = 66,
	Pelvis = 2,
	LHip = 71,
	RHip = 78,
	LKnee = 72,
	RKnee = 79,
	LFeet = 75,
	RFeet = 82,
	Root = 0
};
