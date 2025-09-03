using System;
using System.Data;
using System.Net;
using System.Data.SqlClient;


public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=sa123456;";
      static string GetFirstName(int CountryID)
  {
      string FirstName = "";
      SqlConnection connection = new SqlConnection(connectionString);
      string query = "select FirstName from Contacts where CountryID = @CountryID";
      SqlCommand command = new SqlCommand(query, connection);
      command.Parameters.AddWithValue("@CountryID", CountryID);
      try
      {
          connection.Open();
          object reader = command.ExecuteScalar();
          if(reader != null)
          {
              FirstName = reader.ToString();
          }
      
          connection.Close();
      }
      catch (Exception ex)
      {
          Console.WriteLine("Error: " + ex.Message);
      }
      return FirstName;
  }
    public static void Main()
    {
        Console.WriteLine(GetFirstName(1));
        Console.ReadKey();
    }
}
