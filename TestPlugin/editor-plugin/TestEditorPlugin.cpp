#include "TestEditorPlugin.h"
#include "TestEnginePlugin.h"

using namespace WLIOTVDIL;

QUuid TestEditorPlugin::id()
{
	return QUuid("{2733fd80-7085-4af1-86f6-049307f476bd}");
}

QString TestEditorPlugin::name()
{
	return "Test VDIL editor plugin";
}

QString TestEditorPlugin::developer()
{
	return "WL";
}

QString TestEditorPlugin::version()
{
	return "1.0.0";
}

QString TestEditorPlugin::description()
{
	return "does nothing";
}

QList<IBlocksGroupEditorsFactory*> TestEditorPlugin::mkEditorsFactories()
{
	return QList<IBlocksGroupEditorsFactory*>();
}

VDILEnginePlugin* TestEditorPlugin::mkEnginePlugin()
{
	return new TestEnginePlugin;
}
