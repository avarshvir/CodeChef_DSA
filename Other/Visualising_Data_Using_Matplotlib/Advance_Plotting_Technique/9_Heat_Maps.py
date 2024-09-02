import numpy as np
import matplotlib.pyplot as plt

# Create a sample dataset
data = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

# Create a heatmap
plt.figure(figsize=(6, 4))
plt.imshow(data, cmap='viridis')

# Add colorbar
plt.colorbar()

# Add labels
plt.title('Simple Heatmap')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')

# Show the plot
plt.show()