#ifndef TESTEDITORPLUGIN_H
#define TESTEDITORPLUGIN_H

#include <VDILEditorPlugin.h>

class TestEditorPlugin
	:public WLIOTVDIL::VDILEditorPlugin
{
public:
	virtual QUuid id()override;
	virtual QString name()override;
	virtual QString developer()override;
	virtual QString version()override;
	virtual QString description()override;
	virtual QList<WLIOTVDIL::IBlocksGroupEditorsFactory *> mkEditorsFactories()override;
	virtual WLIOTVDIL::VDILEnginePlugin *mkEnginePlugin()override;
};

#endif // TESTEDITORPLUGIN_H
