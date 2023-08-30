
#ifndef __H
#define __H

#include <string>

/**
  * class _
  * 
  */

class _
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  _ ();

  /**
   * Empty Destructor
   */
  virtual ~_ ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // __H


#ifndef PASSPORT_MANAGEMENT_SYSTEM_H
#define PASSPORT_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class passport_management_system
  * 
  */

class passport_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  passport_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~passport_management_system ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void issue_of_passport ()
  {
  }


  /**
   */
  void verification_of_passport ()
  {
  }


  /**
   */
  void cancellation_of_passsport ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void verify_details;
  void store_proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verify_details
   * @param new_var the new value of verify_details
   */
  void setVerify_details (void new_var)   {
      verify_details = new_var;
  }

  /**
   * Get the value of verify_details
   * @return the value of verify_details
   */
  void getVerify_details ()   {
    return verify_details;
  }

  /**
   * Set the value of store_proof
   * @param new_var the new value of store_proof
   */
  void setStore_proof (void new_var)   {
      store_proof = new_var;
  }

  /**
   * Get the value of store_proof
   * @return the value of store_proof
   */
  void getStore_proof ()   {
    return store_proof;
  }
private:


  void initAttributes () ;

};

#endif // PASSPORT_MANAGEMENT_SYSTEM_H
