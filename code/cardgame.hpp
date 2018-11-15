#include <eosiolib/eosio.hpp>

using namespace eosio;
CONTRACT cardgame : public contract {

  private:

    TABLE user_info {
      name    name;
      uint16_t        win_count = 0;
      uint16_t        lost_count = 0;

      auto primary_key() const { return name.value; }
    };

    typedef multi_index<"users"_n, user_info> users_table;

    users_table _users;



  public:

    cardgame( name receiver, name code, datastream<const char*> ds):contract(receiver,code, ds),_users(code, code.value){}

    ACTION login(name username);

};