python-gammu
============

.. image:: https://travis-ci.org/gammu/python-gammu.svg?branch=master
    :target: https://travis-ci.org/gammu/python-gammu

.. image:: https://ci.appveyor.com/api/projects/status/19cefdo79bqrtq8l?svg=true
    :target: https://ci.appveyor.com/project/nijel/python-gammu

.. image:: https://api.codacy.com/project/badge/Grade/c7e87df480fb4609aa48482873f5c46b
    :target: https://www.codacy.com/app/Gammu/python-gammu

.. image:: https://scrutinizer-ci.com/g/gammu/python-gammu/badges/quality-score.png?b=master
   :target: https://scrutinizer-ci.com/g/gammu/python-gammu/?branch=master

.. image:: https://landscape.io/github/gammu/python-gammu/master/landscape.svg?style=flat
   :target: https://landscape.io/github/gammu/python-gammu/master

.. image:: https://coveralls.io/repos/gammu/python-gammu/badge.svg
    :target: https://coveralls.io/r/gammu/python-gammu

.. image:: https://scan.coverity.com/projects/4837/badge.svg
    :target: https://scan.coverity.com/projects/4837

.. image:: https://img.shields.io/gratipay/Gammu.svg
    :alt: Gratipay
    :target: https://gratipay.com/Gammu/

.. image:: https://www.bountysource.com/badge/team?team_id=23177&style=bounties_received
    :alt: Bountysource
    :target: https://www.bountysource.com/teams/gammu/issues?utm_source=Gammu&utm_medium=shield&utm_campaign=bounties_received

.. image:: https://img.shields.io/pypi/dm/python-gammu.svg
    :alt: PyPI
    :target: https://pypi.python.org/pypi/python-gammu/

Python bindings for Gammu library.

Homepage
========

<https://wammu.eu/python-gammu/>

License
=======

Copyright (C) 2003 - 2017 Michal Cihar

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

Installing
==========

You can install in a usual way for Python modules using distutils, so use
``setup.py`` which is placed in the top level directory::

    ./setup.py build
    sudo ./setup.py install

You can also install it using pip installer::

    pip install python-gammu

Requirements
============

To compile python-gammu, you need Gammu development files (usually shipped as
``libgammu-dev`` or ``gammu-devel`` in Linux distributions).

The location of the libraries is discovered using ``pkg-config``,
``GAMMU_PATH`` environment variable and falls back to generic locations. In
case it does not work, either install ``pkg-config`` or set ``GAMMU_PATH``.

On Linux something like this should work::

    GAMMU_PATH=/opt/gammu python setup.py build

On Windows::

    SET GAMMU_PATH="C:\Gammu"
    python setup.py build


Documentation
=============

Please see included python documentation::

    >>> import gammu
    >>> help(gammu)

Alternatively you can use Sphinx to generate browsable version, which is
also available on-line at <https://wammu.eu/docs/manual/>.

Feedback and bug reports
========================

Any feedback is welcome, see <https://wammu.eu/support/> for information
how to contact developers.
