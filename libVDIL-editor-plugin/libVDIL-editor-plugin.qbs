import qbs

StaticLibrary
{
	targetName: "VDIL-editor-plugin"

	Depends {name: "cpp"}
	Depends {name: "Qt"; submodules: ["core","gui","widgets"]}
	Depends {name: "libVDIL"}
	cpp.includePaths: ["./include"];

	Export
	{
		Depends {name: "cpp"}
		Depends {name: "Qt"; submodules: ["core","gui","widgets"]}
		Depends {name: "libVDIL"}
		cpp.includePaths: ["./include"];
	}

	files:[
        "include/IBlockEditor.h",
        "include/IBlocksGroupEditorsFactory.h",
        "include/IEditorHelper.h",
        "include/VDILEditorPlugin.h",
    ]
}
