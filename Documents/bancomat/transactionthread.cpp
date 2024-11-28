#include "transactionthread.h"

transactionthread::transactionthread(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant transactionthread::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex transactionthread::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex transactionthread::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int transactionthread::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int transactionthread::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant transactionthread::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
