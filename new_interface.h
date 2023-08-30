
#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>

/**
  * class applicant
  * 
  */

class applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  applicant ();

  /**
   * Empty Destructor
   */
  virtual ~applicant ();

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
  void apply_passpport ()
  {
  }


  /**
   */
  void submission_of_proof ()
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

  string applicant_name;
  string applicant_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of applicant_name
   * @param new_var the new value of applicant_name
   */
  void setApplicant_name (string new_var)   {
      applicant_name = new_var;
  }

  /**
   * Get the value of applicant_name
   * @return the value of applicant_name
   */
  string getApplicant_name ()   {
    return applicant_name;
  }

  /**
   * Set the value of applicant_details
   * @param new_var the new value of applicant_details
   */
  void setApplicant_details (string new_var)   {
      applicant_details = new_var;
  }

  /**
   * Get the value of applicant_details
   * @return the value of applicant_details
   */
  string getApplicant_details ()   {
    return applicant_details;
  }
private:


  void initAttributes () ;

};

#endif // APPLICANT_H


#ifndef NEW_INTERFACE_H
#define NEW_INTERFACE_H

#include <string>

/**
  * class new_interface
  * 
  */

/******************************* Abstract Class ****************************
new_interface does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class new_interface
{
public:


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // NEW_INTERFACE_H
