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
    static void AddNewContactAndgetID(stContact contact)
{
    SqlConnection connection = new SqlConnection(connectionString);
    string query = "insert into Contacts (FirstName,LastName,Email,Phone,Address,CountryID)" +
        "values(@FirstName,@LastName,@Email ,@Phone ,@Address,@CountryID )" + "select SCOPE_IDENTITY()";
    SqlCommand command = new SqlCommand(query, connection);
    command.Parameters.AddWithValue("@FirstName", contact.FirstName);
    command.Parameters.AddWithValue("@LastName", contact.LastName);
    command.Parameters.AddWithValue("@Email", contact.Email);
    command.Parameters.AddWithValue("@Phone", contact.Phone);
    command.Parameters.AddWithValue("@Address", contact.Address);
    command.Parameters.AddWithValue("@CountryID", contact.CountryID);
    try
    {
        connection.Open();
        object result = command.ExecuteScalar();
        if (result != null && int.TryParse(result.ToString(), out int insertedID))
        {
            Console.WriteLine($"newly inserted ID: {insertedID}");
        }
        else
        {
            Console.WriteLine("Failed to retrieve the inserted ID!");
        }

        command.Clone();
        connection.Close();
    }
    catch (Exception ex)
    {
        Console.WriteLine(ex.Message);
    }
 }
    public static void Main()
    {
        stContact contact = new stContact 
        { 
            FirstName = "Saeed", 
            LastName ="Omar", 
            Email = "sao@gmail.com", 
            Phone = "87654557", 
            Address = "as 9975 ra", 
            CountryID = 1 
             
        }; 
 
        AddNewContactAndgetID(contact); 
        Console.ReadKey();
    }
}
