#ifndef BOOKMARKS_GLOBAL_H
#define BOOKMARKS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BOOKMARKS_LIBRARY)
#  define BOOKMARKSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BOOKMARKSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BOOKMARKS_GLOBAL_H
