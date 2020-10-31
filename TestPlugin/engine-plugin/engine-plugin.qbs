import qbs

DynamicLibrary
{
	name: "VDILTestEnginePlugin"

	Depends {name: "cpp"}
	Depends {name: "Qt"; submodules: ["core","gui","widgets"]}
	Depends {name: "libVDIL-editor-plugin"}

	files:[
        "TestEnginePlugin.cpp",
        "TestEnginePlugin.h",
    ]
}
