import matplotlib.pyplot as plt
import numpy as np

# Create a figure with 1 row and 2 columns of subplots
fig, axs = plt.subplots(1, 2, figsize=(6, 4))

# Generate x values from 0 to 10 with 100 points
x = np.linspace(0, 10, 100)

# Plot sine function on the first subplot
axs[0].plot(x, np.sin(x))
axs[0].set_title('Sine')

# Plot tangent function on the second subplot
axs[1].plot(x, np.tan(x))
axs[1].set_title('Tangent')

# Adjust the layout to prevent overlapping
plt.tight_layout()

# Display the plot
plt.show()