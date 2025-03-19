
using Sharpmake;
[Sharpmake.Generate]
public class POTFRecompProject : Project
{
    public POTFRecompProject()
    {
        Name = "POTFRecomp";
        IsFileNameToLower = false;

        AddTargets(new Target(
                Platform.win64,
                DevEnv.vs2019,
                Optimization.Debug | Optimization.Release
        ));

        SourceRootPath = @"[project.SharpmakeCsPath]/POTF_Recomp/Source";
    }

    [Configure]
    public void ConfigureAll(Configuration conf, Target target)
    {
        conf.ProjectFileName = "POTF_Recomp";
        conf.ProjectPath = @"[project.SharpmakeCsPath]/POTF_Recomp/build";
    }
}

[Sharpmake.Generate]
public class POTFRecompSolution : Sharpmake.Solution
{
    public POTFRecompSolution()
    {
        Name = "POTFRecomp";
        IsFileNameToLower = false;
        AddTargets(new Target(
                Platform.win64,
                DevEnv.vs2019,
                Optimization.Debug | Optimization.Release
        ));
    }

    [Configure()]
    public void ConfigureAll(Configuration conf, Target target)
    {
        conf.SolutionFileName = "POTFRecomp";
        conf.SolutionPath = @"[solution.SharpmakeCsPath]/POTF_Recomp";
        conf.AddProject<POTFRecompProject>(target);
    }
}

public static class Main
{
    [Sharpmake.Main]
    public static void SharpmakeMain(Sharpmake.Arguments arguments)
    {
        KitsRootPaths.SetUseKitsRootForDevEnv(DevEnv.vs2019, KitsRootEnum.KitsRoot10, Options.Vc.General.WindowsTargetPlatformVersion.v10_0_19041_0);
        arguments.Generate<POTFRecompSolution>();
    }
}
