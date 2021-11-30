#ifndef VDILEDITORPLUGIN_H
#define VDILEDITORPLUGIN_H

#include "IBlocksGroupEditorsFactory.h"
#include <VDIL/plugins/VDILEnginePlugin.h>

namespace WLIOTVDIL
{
	class VDILEditorPlugin
	{
	public:
		virtual ~VDILEditorPlugin(){}
		virtual QUuid id()=0;
		virtual QString name()=0;
		virtual QString developer()=0;
		virtual QString version()=0;
		virtual QString description()=0;
		virtual QList<IBlocksGroupEditorsFactory*> mkEditorsFactories()=0;
		virtual VDILEnginePlugin* mkEnginePlugin()=0;
	};
}

typedef WLIOTVDIL::VDILEditorPlugin* (*VDILEditorPluginLoadFunction)();

#define VDILEditorPluginLoadFunctionName "vdilMakeEditorPlugin"
#define VDIL_MAKE_EDITOR_PLUGIN(ClassName)\
extern "C" WLIOTVDIL::VDILEditorPlugin* vdilMakeEditorPlugin(){return new ClassName;}

#endif // VDILEDITORPLUGIN_H
