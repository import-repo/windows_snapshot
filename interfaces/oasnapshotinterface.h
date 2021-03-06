#ifndef OASNAPSHOTINTERFACE
#define OASNAPSHOTINTERFACE
#include <QObject>
#include "oaplugininterface.h"

class QTranslator;
//! [0]
class OASnapshotInterface:public OAPluginInterFace
{
public:
    virtual ~OASnapshotInterface() {}
    virtual void capture(QWidget *wnd = 0) = 0;
};

QT_BEGIN_NAMESPACE
#define OASnapshotInterface_iid "com.24om.oa.client.OASnapshotInterface"

Q_DECLARE_INTERFACE(OASnapshotInterface, OASnapshotInterface_iid)
QT_END_NAMESPACE
#endif // OASNAPSHOTINTERFACE
