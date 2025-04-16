#include <string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;
  int index;

public:
  Contact();
  ~Contact();

  void set_index(const int &index);
  void set_first_name(const std::string &first_name);
  void set_last_name(const std::string &last_name);
  void set_nickname(const std::string &nickname);
  void set_phone_number(const std::string &phone_number);
  void set_darkest_secret(const std::string &darkest_secret);

  int get_index() const;
  std::string get_first_name() const;
  std::string get_last_name() const;
  std::string get_nickname() const;
  std::string get_phone_number() const;
  std::string get_darkest_secret() const;
};

#endif
