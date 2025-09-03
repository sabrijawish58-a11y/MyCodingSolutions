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
static bool FindContatctByID(int ContactID, ref stContact ContactInfo)
{
    bool isFound = false;
    SqlConnection connection = new SqlConnection(connectionString);
    string query = "select *from Contacts where ContactID = @ContactID";
    SqlCommand command = new SqlCommand(query, connection);
    command.Parameters.AddWithValue("@ContactID", ContactID);
    try
    {
        connection.Open();
        SqlDataReader reader = command.ExecuteReader();
        if (reader.Read())
        {
            isFound = true;
            ContactInfo.ID = (int)reader["ContactID"];
            ContactInfo.FirstName = (string)reader["FirstName"];
            ContactInfo.LastName = (string)reader["LastName"];
            ContactInfo.Email = (string)reader["Email"];
            ContactInfo.Phone = (string)reader["Phone"];
            ContactInfo.Address = (string)reader["Address"];
            ContactInfo.CountryID = (int)reader["CountryID"];

        }
        reader.Close();
        connection.Close();
    }
    catch (Exception ex)
    {
        Console.WriteLine("Error: " + ex.Message);
    }
    return isFound;

}
    public static void Main()
    {
        stContact ContactInfo = new stContact();
        if (FindContatctByID(1, ref ContactInfo))
        {
            Console.WriteLine($"\nContact ID : {ContactInfo.ID}");
            Console.WriteLine($"First Name : {ContactInfo.FirstName}");
            Console.WriteLine($"Last Name : {ContactInfo.LastName}");
            Console.WriteLine($"Email : {ContactInfo.Email}");
            Console.WriteLine($"Phone : {ContactInfo.Phone}");
            Console.WriteLine($"Address : {ContactInfo.Address}");
            Console.WriteLine($"Country ID : {ContactInfo.CountryID}");
        }
        else
        {
            Console.WriteLine("Contact not Found");
        }
        Console.ReadKey();
    }
}
