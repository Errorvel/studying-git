#include "atmwidget.h"

atmwidget::atmwidget(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant atmwidget::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex atmwidget::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex atmwidget::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int atmwidget::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int atmwidget::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant atmwidget::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
