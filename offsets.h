enum OFFSETS {

    UWORLD = 0x11FD3D78, //updated v31.10
    game_instance = 0x1D8,//updated
    game_state = 0x160,//updated
    local_player = 0x38,//updated
    player_controller = 0x30,//updated
    acknowledged_pawn = 0x338, //updated //LocalPawn
    skeletal_mesh = 0x310, //updated //Actor Mesh
    player_state = 0x2B0, //updated
    root_component = 0x198, //updated
    velocity = 0x168, //updated
    relative_location = 0x120, //updated
    relative_rotation = 0x138, //updated
    team_index = 0x11d1, //updated
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
    CurrentVehicle = 0x2998, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawn&member=CurrentVehicle
    DefaultFOV = 0x2a4, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=APlayerCameraManager&member=DefaultFOV
    CustomTimeDilation = 0x68, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AActor&member=CustomTimeDilation
    bADSWhileNotOnGround = 0x5579, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerPawnAthena&member=bADSWhileNotOnGround
  	GlobalAnimRateScale= 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=USkeletalMeshComponent&member=GlobalAnimRateScale


    //bone
    boneArray = 0x570, //updated
    boneCache = 0x600, //updated

    //Extra
    Platform = 0x3f0,  // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerState&member=Platform
    Habenero = 0x9a8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerState&member=HabaneroComponent
    rankProgress = 0xb8, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=UFortPlayerStateComponent_Habanero&member=RankedProgress
    rank = 0x10, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=structs&idx=FRankedProgressReplicatedData&member=Rank
    Username = 0xA68, //updated
    UsernameLenght = 0x10,  //updated
    UsernameEncryptedBuffer = 0x8,  //updated
    killsCount = 0x11e4,  // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPlayerStateAthena&member=KillScore
};

enum WeaponOffsets {

    CurrentWeapon = 0x9d8, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortPawn&member=CurrentWeapon
    AmmoCount = 0xef4, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=AmmoCount
    WeaponData = 0x510, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=WeaponData
    bIsReloadingWeapon = 0x399, //https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=bIsReloadingWeapon
    Tier = 0xa2, //updated
    ItemName = 0x40,  //updated
    bDisableEquipAnimation = 0x39a, // https://dumpspace.spuckwaffel.com/Games/?hash=6b77eceb&type=classes&idx=AFortWeapon&member=bDisableEquipAnimation
};
