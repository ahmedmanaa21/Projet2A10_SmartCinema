#include "gest_cli_abon1.h"

gest_cli_abon1::gest_cli_abon1(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant gest_cli_abon1::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex gest_cli_abon1::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex gest_cli_abon1::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int gest_cli_abon1::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int gest_cli_abon1::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant gest_cli_abon1::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
