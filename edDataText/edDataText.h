// /////////////////////////////////////////////////////////////////
// Generated by dtkPluginGenerator
// /////////////////////////////////////////////////////////////////

#ifndef EDDATATEXT_H
#define EDDATATEXT_H

#include <dtkCore/dtkAbstractData.h>

#include "edDataTextPluginExport.h"

class edDataTextPrivate;

class EDDATATEXTPLUGIN_EXPORT edDataText : public dtkAbstractData
{
    Q_OBJECT

public:
             edDataText(void);
    virtual ~edDataText(void);

    virtual QString description(void) const;

    static bool registered(void);

    virtual void *data(void);

    virtual void update(void);

    virtual void setData(void* i_newData);
private:
    edDataTextPrivate *d;
};

dtkAbstractData *createEdDataText(void);

#endif
