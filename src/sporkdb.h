// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2021 The DECENOMY Core Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TECSATETHER_CSPORKDB_H
#define TECSATETHER_CSPORKDB_H

#include "fs.h"
#include "dbwrapper.h"
#include "spork.h"

class CSporkDB : public CDBWrapper
{
public:
    CSporkDB(size_t nCacheSize, bool fMemory = false, bool fWipe = false);

private:
    CSporkDB(const CSporkDB&);
    void operator=(const CSporkDB&);

public:
    bool WriteSpork(const SporkId nSporkId, const CSporkMessage& spork);
    bool ReadSpork(const SporkId nSporkId, CSporkMessage& spork);
    bool SporkExists(const SporkId nSporkId);
};


#endif //TECSATETHER_CSPORKDB_H
