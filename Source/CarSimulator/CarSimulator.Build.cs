// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class CarSimulator : ModuleRules
{
    string OPENCV_VERSION = "455";
	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
	}

    public bool LoadOpenFace(ReadOnlyTargetRules Target)
    {
        // Start linking here!
        bool isLibrarySupported = false;

        // Create Library Paths 
        string OpenCVPath = Path.Combine(ThirdPartyPath, "OpenCV");
        string OpenBLASPath = Path.Combine(ThirdPartyPath, "OpenBLAS");
        string dlibPath = Path.Combine(ThirdPartyPath, "dlib");
        string FaceAnalyserPath = Path.Combine(ThirdPartyPath, "FaceAnalyser");
        string GazeAnalyserPath = Path.Combine(ThirdPartyPath, "GazeAnalyser");
        string LandmarkDetectorPath = Path.Combine(ThirdPartyPath, "LandmarkDetector");

        // Get Library Path 
        string LibPathOpenCV = "";
        string LibPathOpenBLAS = "";
        string LibPathDlib = "";
        string LibPathFaceAnalyser = "";
        string LibPathGazeAnalyser = "";
        string LibPathLandmarkDetector = "";

        //bool isdebug = Target.Configuration == UnrealTargetConfiguration.Debug && BuildConfiguration.bDebugBuildsActuallyUseDebugCRT;
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            LibPathOpenCV = Path.Combine(OpenCVPath, "Libraries", "Win64");
            LibPathOpenBLAS = Path.Combine(OpenBLASPath, "lib", "x64");
            LibPathDlib = Path.Combine(dlibPath, "lib", "x64", "v140", "Release");
            LibPathFaceAnalyser = Path.Combine(FaceAnalyserPath, "x64", "Release");
            LibPathGazeAnalyser = Path.Combine(GazeAnalyserPath, "x64", "Release");
            LibPathLandmarkDetector = Path.Combine(LandmarkDetectorPath, "x64", "Release");
            isLibrarySupported = true;

        }
        else
        {
            string Err = string.Format("{0} dedicated server is made to depend on {1}. We want to avoid this, please correct module dependencies.", Target.Platform.ToString(), this.ToString()); System.Console.WriteLine(Err);
        }

        if (isLibrarySupported)
        {
            //Add Include path 
            PublicIncludePaths.AddRange(new string[] { Path.Combine(OpenCVPath, "Includes") });
            PublicIncludePaths.AddRange(new string[] { Path.Combine(dlibPath, "include") });
            PublicIncludePaths.AddRange(new string[] { Path.Combine(OpenBLASPath, "include") });
            PublicIncludePaths.AddRange(new string[] { Path.Combine(FaceAnalyserPath, "include") });
            PublicIncludePaths.AddRange(new string[] { Path.Combine(GazeAnalyserPath, "include") });
            PublicIncludePaths.AddRange(new string[] { Path.Combine(LandmarkDetectorPath, "include") });

            // Add Library Path 
            PublicLibraryPaths.Add(LibPathOpenCV);
            PublicLibraryPaths.Add(LibPathOpenBLAS);
            PublicLibraryPaths.Add(LibPathDlib);
            PublicLibraryPaths.Add(LibPathFaceAnalyser);
            PublicLibraryPaths.Add(LibPathGazeAnalyser);
            PublicLibraryPaths.Add(LibPathLandmarkDetector);

            //Add Static Libraries
            PublicAdditionalLibraries.Add("opencv_world455.lib");
            PublicAdditionalLibraries.Add("dlib.lib");
            PublicAdditionalLibraries.Add("FaceAnalyser.lib");
            PublicAdditionalLibraries.Add("GazeAnalyser.lib");
            PublicAdditionalLibraries.Add("LandmarkDetector.lib");
            PublicAdditionalLibraries.Add("libopenblas.dll.a");

            //Add Dynamic Libraries
            PublicDelayLoadDLLs.Add("opencv_world455.dll");
            PublicDelayLoadDLLs.Add("opencv_ffmpeg455_64.dll");
            PublicDelayLoadDLLs.Add("libopenblas.dll");
        }

        Definitions.Add(string.Format("WITH_OPENCV_BINDING={0}", isLibrarySupported ? 1 : 0));
        Definitions.Add("_WINDOWS");
        Definitions.Add("WIN64=1");
        Definitions.Add("_WIN64=1");
        //Definitions.Add("DLIB_NO_GUI_SUPPORT");
        //Definitions.Add("DLIB_HAVE_SSE2");
        //Definitions.Add("DLIB_HAVE_SSE3");
        //Definitions.Add("DLIB_HAVE_SSE41");
        //Definitions.Add("DLIB_NO_GUI_SUPPORT");

        return isLibrarySupported;
    }


    public CarSimulator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay", "InputCore", "RHI", "RenderCore" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");

        LoadOpenFace(Target);
	}

    
}
