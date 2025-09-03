using System;
using System.Data;
using System.Net;
using System.Data.SqlClient;


public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=sa123456;";
    static void GetContatcsWithCountries(){
    SqlConnection connection = new SqlConnection(connectionString);
    string query = "select ContactID, FirstName, LastName, Email, Phone, Address, Countries.CountryName from Contacts " +
        "inner join Countries on Countries.CountryID = Contacts.ContactID";
    SqlCommand command = new SqlCommand(query, connection);
    
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
            string countryName = (string)reader["CountryName"];

            Console.WriteLine($"Contact ID: {contactID}");
            Console.WriteLine($"Name: {firstName} {lastName}");
            Console.WriteLine($"Email: {email}");
            Console.WriteLine($"Phone: {phone}");
            Console.WriteLine($"Address: {address}");
            Console.WriteLine($"Country Name: {countryName}");
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
        GetContatcsWithCountries();
        Console.ReadKey();
    }
}
