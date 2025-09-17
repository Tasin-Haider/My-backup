import random

def generate_and_save_random_numbers():
    """
    Generates a specified number of random integers within a given range
    and saves them to a text file.
    """
    try:
        # Get user input for the number of random values to generate
        count = int(input("How many random numbers do you want to generate? "))
        
        # Get user input for the range (min and max values)
        start = int(input("Enter the minimum value: "))
        end = int(input("Enter the maximum value: "))
        
        # Validate the input to prevent errors
        if count <= 0 or start > end:
            print("Invalid input. Please ensure the count is positive and the start is less than or equal to the end.")
            return

        # Generate a list of random numbers as strings
        num_list = [str(random.randint(start, end)) for _ in range(count)]
        
        # Join the list elements into a single, whitespace-separated string
        output_string = " ".join(num_list)
        
        # Define the file name
        file_name = "random_numbers.txt"
        
        # Open the file in write mode ('w') and save the string
        with open(file_name, 'w') as file:
            file.write(output_string)
            
        print(f"\n✅ Success! Generated {count} random numbers and saved them to '{file_name}'.")

    except ValueError:
        print("❌ Error: Invalid input. Please enter valid integers.")

# Run the function
generate_and_save_random_numbers()