import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

# Create a figure
fig = plt.figure(figsize=(6, 4))

# Create a 3D axes
ax = fig.add_subplot(111, projection='3d')

# Set labels for each axis
ax.set_xlabel('X axis', fontsize=12)
ax.set_ylabel('Y axis', fontsize=12)
ax.set_zlabel('Z axis', fontsize=12)

# Set the viewing angle
ax.view_init(elev=20, azim=45)

# Add a title
ax.set_title('My First 3D Plot', fontsize=14)

# Optional: Add some dummy points to see the 3D effect
x = np.random.rand(10)
y = np.random.rand(10)
z = np.random.rand(10)
ax.scatter(x, y, z, c='r', marker='o')

# Show the plot
plt.show()