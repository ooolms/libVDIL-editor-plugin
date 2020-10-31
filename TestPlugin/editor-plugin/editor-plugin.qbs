import qbs

DynamicLibrary
{
	name: "VDILTestEditorPlugin"

	Depends {name: "cpp"}
	Depends {name: "Qt"; submodules: ["core","gui","widgets"]}
	Depends {name: "libVDIL-editor-plugin"}
	cpp.includePaths: ["../engine-plugin"]

	files:[
        "../engine-plugin/TestEnginePlugin.cpp",
        "../engine-plugin/TestEnginePlugin.h",
        "TestEditorPlugin.cpp",
        "TestEditorPlugin.h",
    ]
}
