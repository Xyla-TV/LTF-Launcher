using UnrealBuildTool;

public class ABWFR_LauncherTarget : TargetRules
{
	public ABWFR_LauncherTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("ABWFR_Launcher");
	}
}
