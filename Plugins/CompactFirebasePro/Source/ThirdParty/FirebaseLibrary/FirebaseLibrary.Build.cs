//Publisher: stephen, Intended publishing: 2021

using System.IO;
using UnrealBuildTool;

public class FirebaseLibrary : ModuleRules
{
	public FirebaseLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        string[] LibraryNames = new string[] {
                "firebase_app",
                "firebase_auth",
                "firebase_firestore",
            };
        string[] FrameworkNames = new string[] {
                "firebase",
                "firebase_auth",
                "firebase_firestore",
                "GoogleUtilities",
                "PromisesObjC",
                "nanopb",
                "GoogleAppMeasurement",
                "FirebaseCore",
                "GTMSessionFetcher",
                "FirebaseAuth",
                "abseil",
                "BoringSSL-GRPC",
                "gRPC-C++",
                "gRPC-Core",
                "leveldb-library",
                "FirebaseFirestore",
            };
            
//          string[] MacFrameworkNames = new string[] {
//                 "firebase",
//                 "firebase_auth",
//                 "firebase_firestore",
//             };
        //Environment variable
        PublicDefinitions.Add("INTERNAL_EXPERIMENTAL=0");
        //include path
        string IncludePath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/include");
        //PrivateIncludePaths.Add(IncludePath);
        PublicIncludePaths.Add(IncludePath);

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            //lib
            string LibPath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/libs/windows/VS2015/MD/x64/Release/");
            for(int i = 0; i < LibraryNames.Length; ++i)
            {
                PublicAdditionalLibraries.Add(LibPath + LibraryNames[i] + ".lib");
            }
            PublicAdditionalLibraries.Add(LibPath + "firebase_storage.lib");
            
            //system api for compiling error: error LNK2019: unresolved external symbol __imp_CertOpenStore referenced in function f_b_schannel_connect_step1
            PublicSystemLibraries.Add("crypt32.lib");
        }
        else if(Target.Platform == UnrealTargetPlatform.Android)
        {
            //lib
            string ArmeabiPath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/libs/android/armeabi-v7a/c++/");
            string Arm64Path = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/libs/android/arm64-v8a/c++/");
            for (int i = 0; i < LibraryNames.Length; ++i)
            {
                PublicAdditionalLibraries.Add(ArmeabiPath + "lib" + LibraryNames[i] + ".a");
                PublicAdditionalLibraries.Add(Arm64Path + "lib" + LibraryNames[i] + ".a");
            }
            //UPL
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "FirebaseLibrary.xml"));
        }
        else if (Target.Platform == UnrealTargetPlatform.IOS)
        {
        
            //framework
            string UniversalFramePath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/frameworks/ios/universal/");
            for (int i = 0; i < FrameworkNames.Length; ++i)
            {
                PublicAdditionalFrameworks.Add(new Framework(FrameworkNames[i], UniversalFramePath + FrameworkNames[i] + ".embeddedframework.zip", ""));
            }
            PublicFrameworks.AddRange(
                    new string[]
                    {
                        "JavaScriptCore",
                        "StoreKit",
                    }
            );
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            //public framework
            PublicFrameworks.AddRange(
                    new string[]
                    {
                        "Security",
                        "CoreFoundation",
                        "Foundation",
                        "GSS",
                        "Kerberos",
                        "SystemConfiguration",
                    }
            );
                    
            //lib
            string MacLibPath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/libs/darwin/universal/");
            for (int i = 0; i < LibraryNames.Length; ++i)
            {
                PublicAdditionalLibraries.Add(MacLibPath + "lib" + LibraryNames[i] + ".a");
            }
            //framework
            /*
            string MacFramePath = Path.Combine(ModuleDirectory, "firebase_cpp_sdk/frameworks/darwin/universal/");
            
            for (int i = 0; i < MacFrameworkNames.Length; ++i)
            {
                //Console.WriteLine(MacFramePath + MacFrameworkNames[i] + ".framework");
               PublicFrameworks.Add(MacFramePath + MacFrameworkNames[i] + ".framework");
            }
            */
        }
    }
}
