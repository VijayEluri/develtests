// /////////////////////////////////////////////////////////////////
// Generated by dtkPluginGenerator
// /////////////////////////////////////////////////////////////////

#include "edDataText.h"
#include "edDataTextPlugin.h"

#include <dtkCore/dtkLog.h>

// /////////////////////////////////////////////////////////////////
// edDataTextPluginPrivate
// /////////////////////////////////////////////////////////////////

class edDataTextPluginPrivate 
{
public:
    // Class variables go here.
};

// /////////////////////////////////////////////////////////////////
// edDataTextPlugin
// /////////////////////////////////////////////////////////////////

edDataTextPlugin::edDataTextPlugin(QObject *parent) : dtkPlugin(parent), d(new edDataTextPluginPrivate)
{

}

edDataTextPlugin::~edDataTextPlugin(void)
{
    delete d;

    d = NULL;
}

bool edDataTextPlugin::initialize(void)
{
    if(!edDataText::registered())
	dtkWarning() << "Unable to register edDataText type";

    return true;
}

bool edDataTextPlugin::uninitialize(void)
{
    return true;
}

QString edDataTextPlugin::name(void) const
{
    return "edDataTextPlugin";
}

QString edDataTextPlugin::description(void) const
{
    return "";
}

QStringList edDataTextPlugin::tags(void) const
{
    return QStringList();
}

QStringList edDataTextPlugin::types(void) const
{
    return QStringList() << "edDataText";
}

Q_EXPORT_PLUGIN2(edDataTextPlugin, edDataTextPlugin)
