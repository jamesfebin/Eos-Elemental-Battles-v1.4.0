#include <eosiolib/eosio.hpp>

using namespace eosio;
CONTRACT cardgame : public contract {

  public:

    cardgame( name receiver, name code, datastream<const char*> ds):contract(receiver,code, ds ){}

};