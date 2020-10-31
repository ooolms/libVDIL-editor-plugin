#include "TestEnginePlugin.h"

using namespace WLIOTVDIL;

QUuid TestEnginePlugin::id()
{
	return QUuid("{2733fd80-7085-4af1-86f6-049307f476bd}");
}

QString TestEnginePlugin::name()
{
	return "Test VDIL engine plugin";
}

QString TestEnginePlugin::developer()
{
	return "WL";
}

QString TestEnginePlugin::version()
{
	return "1.0.0";
}

QString TestEnginePlugin::description()
{
	return "does nothing";
}

void TestEnginePlugin::setup(Engine *e)
{
	Q_UNUSED(e)
}
