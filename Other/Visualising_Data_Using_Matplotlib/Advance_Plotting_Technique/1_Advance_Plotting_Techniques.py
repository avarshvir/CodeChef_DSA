import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

# Generate sample customer data
np.random.seed(42)
num_customers = 100

age = np.random.randint(20, 70, num_customers)
income = np.random.randint(20000, 100000, num_customers)
purchase_freq = np.random.randint(1, 20, num_customers)

# Create the plot
fig = plt.figure(figsize=(6, 5))
ax = fig.add_subplot(111, projection='3d')

# Create scatter plot
ax.scatter(age, income, purchase_freq)

# Customize the plot
ax.set_title('Customer Data: Age, Income, and Purchase Frequency')
ax.set_xlabel('Age')
ax.set_ylabel('Income ($)')
ax.set_zlabel('Purchase Frequency (per year)')

# Show the plot
plt.show()