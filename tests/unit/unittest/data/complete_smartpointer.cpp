/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/
namespace std {
template<class Type, class... Args>
class unique_ptr {};

template<class Type, class... Args>
class shared_ptr {
public:
    void reset();
    Type *operator->();
};

template<class Type, class... Args>
unique_ptr<Type> make_unique(Args&&... args);

template<class Type, class... Args>
shared_ptr<Type> make_shared(Args&&... args);
} // namespace std

template<class Type>
class QSharedPointer
{
public:
    template<class... Args>
    static QSharedPointer<Type> create(Args&&... args);
};

class Bar
{
public:
    Bar();
    Bar(int, int);
};
void f2()
{
    std::unique_ptr<Bar> bar = std::make_unique<Bar>();
    std::shared_ptr<Bar> bar2 = std::make_shared<Bar>();
    QSharedPointer<Bar> bar3 = QSharedPointer<Bar>::create();
    bar2->
}
