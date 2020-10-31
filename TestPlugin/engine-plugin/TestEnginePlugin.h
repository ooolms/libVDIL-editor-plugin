#ifndef TESTENGINEPLUGIN_H
#define TESTENGINEPLUGIN_H

#include <VDIL/plugins/VDILEnginePlugin.h>

class TestEnginePlugin
	:public WLIOTVDIL::VDILEnginePlugin
{
public:
	virtual QUuid id() override;
	virtual QString name() override;
	virtual QString developer() override;
	virtual QString version() override;
	virtual QString description() override;
	virtual void setup(WLIOTVDIL::Engine *e) override;
};

#endif // TESTENGINEPLUGIN_H
