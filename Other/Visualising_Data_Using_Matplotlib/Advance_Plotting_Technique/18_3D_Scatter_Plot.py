import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

# Generate some sample data
n = 1000
x = np.random.normal(0, 1, n)
y = np.random.normal(0, 1, n)
z = np.random.normal(0, 1, n)

# Create the 3D scatter plot
fig = plt.figure(figsize=(8, 6))
ax = fig.add_subplot(111, projection='3d')

# Create scatter plot with color-coding and size variation
scatter = ax.scatter(x, y, z, c=z, cmap='viridis', alpha=0.6)

# Set the viewing angle
ax.view_init(elev=20, azim=45)

plt.show()