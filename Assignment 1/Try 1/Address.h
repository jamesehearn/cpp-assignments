/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Date: 6/20/2013
Description: This is the Address header file for Assignment 1 program, compiled with the Employee.cpp file.
			This header contains a default contructor, a getCity function, a getState function, 
			a getStreet function, a getZip function, a print function, and four private string instance variables 
			for Street, City, State and Zip.
******************************************************************************************************************/
#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>	//
#include <iosfwd>	//

/** Address is a class that represents a physical home address. */
class Address {
 public:

 // Constructors
  /** Constructs an addres with given values.
      @param street The street address of residence
      @param city The city of residence
      @param state The state of residence
      @param zip The Zip Code of the residence
  */

   Address(std::string street, std::string city, std::string state, std::string zip) :
   street_address(street), city_address(city), state_address(state), zip_address(zip) {}
  
  /** Construct a default address. */
  Address() : stret_address("9999 Sunset Boluevard"), city_address("Beverly Hills"), state_address("CA"), zip_address("9999") {}
 
   // Accessor Functions
  /** Returns the street address.
      @return the street address as a string
  */
  std::string getStreet() const { return street_address; }
  
  /** Returns the city of residence.
      @return the city name as a string
  */
  std::string getCity() const { return city_address; }
  
  /** Returns the state of residence.
      @return the state name as a string
  */
  std::string getState() const { return state_address; }

  /** Returns the zip code of the residence.
      @return the zip code as a string
  */
  std::string getZip() const { return zip_address; }
  
  
	//Print Function
  /** Declaration of the stream insertion operator for Address.
      @param os The target ostream
      @param addy The address object being output
      @return The updated output stream
  */
  friend std::ostream& operator<<(std::ostream& os, const Address& addy);
  
 private:
  // String Variables
  /** The street address. */
  std::string street_address;

  /** The city. */
  std::string city_address;

  /** The state. */
  std::string state_address;

  /** The zip code. */
  std::string zip_address;

};

#endif