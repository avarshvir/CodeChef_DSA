import matplotlib.pyplot as plt

categories = ['A', 'B', 'C', 'D', 'E']
values = [23, 35, 17, 29, 12]
colors = ['red', 'gold', 'orange', 'green', 'blue']

plt.figure(figsize=(6, 4))
plt.bar(categories, values, color = colors)
plt.title('Simple Bar Chart')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.grid(True, axis='y')
plt.show()