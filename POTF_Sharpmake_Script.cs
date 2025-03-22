
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
                DevEnv.vs2022,
                Optimization.Debug | Optimization.Release
        ));

        SourceRootPath = @"[project.SharpmakeCsPath]/POTF_Recomp/Source";
    }

    [Configure]
    public void ConfigureAll(Configuration conf, Target target)
    {
        conf.ProjectFileName = "POTF_Recomp";
        conf.ProjectPath = @"[project.SharpmakeCsPath]/POTF_Recomp/build";
        conf.Options.Add(Options.Vc.General.PlatformToolset.ClangCL); // Use Clang on Windows
        conf.Options.Add(Options.Vc.Compiler.EnhancedInstructionSet.AdvancedVectorExtensions); // Enable AVX
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
                DevEnv.vs2022,
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
        KitsRootPaths.SetUseKitsRootForDevEnv(DevEnv.vs2022, KitsRootEnum.KitsRoot10, Options.Vc.General.WindowsTargetPlatformVersion.Latest);
        arguments.Generate<POTFRecompSolution>();
    }
}
