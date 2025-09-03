using System;
using System.Data;
using System.Net;
using System.Data.SqlClient;


public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=sa123456;";
    static void SearchContactsEndtWith(string EndWith)
 {
     SqlConnection connection = new SqlConnection(connectionString);
     string query = "select *from Contacts where FirstName like '%' + @EndWith + ''";
     SqlCommand command = new SqlCommand(query, connection);
     command.Parameters.AddWithValue("@EndWith", EndWith);
     try
     {
         connection.Open();
         SqlDataReader reader = command.ExecuteReader();
         while (reader.Read())
         {
             int contactID = (int)reader["ContactID"];
             string firstName = (string)reader["FirstName"];
             string lastName = (string)reader["LastName"];
             string email = (string)reader["Email"];
             string phone = (string)reader["Phone"];
             string address = (string)reader["Address"];
             int countryID = (int)reader["CountryID"];

             Console.WriteLine($"Contact ID: {contactID}");
             Console.WriteLine($"Name: {firstName} {lastName}");
             Console.WriteLine($"Email: {email}");
             Console.WriteLine($"Phone: {phone}");
             Console.WriteLine($"Address: {address}");
             Console.WriteLine($"Country ID: {countryID}");
             Console.WriteLine();
         }
         reader.Close();
         connection.Close();
     }
     catch (Exception ex)
     {
         Console.WriteLine("Error: " + ex.Message);
     }
 }
    public static void Main()
    {
        SearchContactsEndtWith("e");
        Console.ReadKey();
    }
}
