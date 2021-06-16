/****************************************************************************
 *                                                                          *
 * Copyright (C) 2016 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_BIOLOGY_H
#define QT_BIOLOGY_H

#include <QtManagers>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_BIOLOGY_LIB)
#      define Q_BIOLOGY_EXPORT Q_DECL_EXPORT
#    else
#      define Q_BIOLOGY_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_BIOLOGY_EXPORT
#endif

namespace N
{

class Q_BIOLOGY_EXPORT Geno   ;

class Q_BIOLOGY_EXPORT Geno
{
  public:

    explicit Geno (void);
    virtual ~Geno (void);

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
