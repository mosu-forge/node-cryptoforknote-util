#pragma once

#define CURRENT_TRANSACTION_VERSION 1
#define TX_FORK_ID_STR "ryo-currency"

enum BLOB_TYPE {
  BLOB_TYPE_CRYPTONOTE  = 0,
  BLOB_TYPE_FORKNOTE1   = 1,
  BLOB_TYPE_FORKNOTE2   = 2,
  BLOB_TYPE_CRYPTONOTE2 = 3, // Masari
};