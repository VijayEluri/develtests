// /////////////////////////////////////////////////////////////////
// Generated by dtkPluginGenerator
// /////////////////////////////////////////////////////////////////

#include "edProcessTextGenerator.h"

#include <dtkCore/dtkAbstractProcessFactory.h>
#include <dtkCore/dtkAbstractDataFactory.h>
#include <dtkCore/dtkAbstractData.h>

// /////////////////////////////////////////////////////////////////
// edProcessTextGeneratorPrivate
// /////////////////////////////////////////////////////////////////

class edProcessTextGeneratorPrivate
{
public:
    dtkAbstractData* text;
    QString textString;
    int num;
};

// /////////////////////////////////////////////////////////////////
// edProcessTextGenerator
// /////////////////////////////////////////////////////////////////

edProcessTextGenerator::edProcessTextGenerator(void) : dtkAbstractProcess(), d(new edProcessTextGeneratorPrivate)
{
    d->text = dtkAbstractDataFactory::instance()->create("edDataText");
    d->num = 0;
}

edProcessTextGenerator::~edProcessTextGenerator(void)
{
}

bool edProcessTextGenerator::registered(void)
{
    return dtkAbstractProcessFactory::instance()->registerProcessType("edProcessTextGenerator", createEdProcessTextGenerator);
}

QString edProcessTextGenerator::description(void) const
{
    return "edProcessTextGenerator";
}

dtkAbstractData *edProcessTextGenerator::output(void)
{
    return d->text;
}

int edProcessTextGenerator::update(void)
{
     qDebug() << __PRETTY_FUNCTION__ << "\n";
     QTextStream  newMessage( &d->textString );
     newMessage.reset();
     newMessage << "Hello dtk composer world. Message " <<  d->num << "\n";
     qDebug() << newMessage.string() << "\n";
     d->text->setData( static_cast<void*>(newMessage.string()) );
     d->num++;
     return 0;
}

// /////////////////////////////////////////////////////////////////
// Type instanciation
// /////////////////////////////////////////////////////////////////

dtkAbstractProcess *createEdProcessTextGenerator(void)
{
    return new edProcessTextGenerator;
}
