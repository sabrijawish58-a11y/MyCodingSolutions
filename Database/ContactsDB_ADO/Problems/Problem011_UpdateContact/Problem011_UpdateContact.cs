using System;
using System.Data;
using System.Net;
using System.Data.SqlClient;


public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=sa123456;";
     public struct stContact
 {
     public int ID { get; set; }
     public string FirstName { get; set; }
     public string LastName { get; set; }
     public string Email { get; set; }
     public string Phone { get; set; }
     public string Address { get; set; }
     public int CountryID { get; set; }
 }
   static void UpdateContact(int ContactID,stContact newContact)
{
    SqlConnection connection = new SqlConnection(connectionString);
    string query = @"update Contacts
                    set FirstName = @FirstName,
                        LastName = @LastName,
                        Email = @Email,
                        Phone = @Phone,
                        Address = @Address,
                        CountryID = @CountryID
                        where ContactID = @ContactID;";
    SqlCommand command = new SqlCommand(query, connection);
    command.Parameters.AddWithValue("@ContactID", ContactID);
    command.Parameters.AddWithValue("@FirstName", newContact.FirstName);
    command.Parameters.AddWithValue("@LastName", newContact.LastName);
    command.Parameters.AddWithValue("@Email", newContact.Email);
    command.Parameters.AddWithValue("@Phone", newContact.Phone);
    command.Parameters.AddWithValue("@Address", newContact.Address);
    command.Parameters.AddWithValue("@CountryID", newContact.CountryID);
    try
    {
        connection.Open();
        int rowAffected = command.ExecuteNonQuery();
        if(rowAffected > 0)
        {
            Console.WriteLine($"Updated Successfully");
        }
        else
        {
            Console.WriteLine("Update Failed!");
        }

        command.Clone();
        connection.Close();

    }
    catch(Exception ex)
    {
        Console.WriteLine(ex.Message);
    }

}
    public static void Main()
    {
         stContact contactInfo = new stContact 
        { 
            FirstName = "Ahmed", 
            LastName ="Saleh", 
            Email = "ahd@gmail.com", 
            Phone = "212343567", 
            Address = "as 1231 ra", 
            CountryID = 4 
             
        }; 
 
        UpdateContact(1,contactInfo); 
        Console.ReadKey();
    }
}
