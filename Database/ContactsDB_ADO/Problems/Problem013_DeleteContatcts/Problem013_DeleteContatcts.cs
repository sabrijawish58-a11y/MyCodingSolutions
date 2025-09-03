using System;
using System.Data;
using System.Net;
using System.Data.SqlClient;


public class Program
{
    static string connectionString = "Server=.;Database=ContactsDB;User Id=sa;Password=sa123456;";
      static void DeleteContatcts(string ContactIDs)
 {
     SqlConnection connection = new SqlConnection(connectionString);
     string query = @"Delete from Contacts where ContactID in (" + ContactIDs + ")";
     SqlCommand command = new SqlCommand(query, connection);
  
     try
     {
         connection.Open();
         int rowAffected = command.ExecuteNonQuery();
         if (rowAffected > 0)
         {
             Console.WriteLine($"{rowAffected} , rows affected");
             Console.WriteLine($"Delete Successfully");
         }
         else
         {
             Console.WriteLine("Delete Failed!");
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
        
        DeleteContatcts("8,9,10");
 
        AddNewContactAndgetID(contact); 
        Console.ReadKey();
    }
}
