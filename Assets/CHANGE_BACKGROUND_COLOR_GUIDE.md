# How to Change the Yellow Background

## Quick Fix Steps

The yellow background is likely coming from one of these sources:

### Option 1: UI Panel/Image Background (Most Likely)

1. **Open Unity** and select your scene
2. **In the Hierarchy**, expand the **Canvas** GameObject
3. **Look for** any of these:
   - A GameObject named "Background" or "Panel"
   - Any UI element with a yellow color
   - The **HUDPanel** or any of its children

4. **To find it quickly:**
   - Select **Canvas** in Hierarchy
   - Press **F** to frame it in Scene view
   - Look for a large yellow rectangle

5. **Once found, you have 3 options:**

   **A. Change the Color:**
   - Select the yellow background GameObject
   - In **Inspector**, find the **Image** component
   - Click the **Color** field
   - Choose a new color (or set to white/transparent)
   - Or set **Alpha** to `0` to make it transparent

   **B. Remove the Background:**
   - Select the yellow background GameObject
   - **Uncheck** the checkbox at the top of Inspector (makes it inactive)
   - Or **Delete** it if you don't need it

   **C. Replace with Your Own Background:**
   - Select the yellow background GameObject
   - In **Image** component, click the circle next to **Source Image**
   - Select your `background_main.jpeg` or `background.jpg` sprite
   - Set **Color** to white (r: 1, g: 1, b: 1, a: 1)

### Option 2: Camera Background Color

If the yellow is coming from the camera:

1. **Select Main Camera** in Hierarchy
2. In **Inspector**, find **Camera** component
3. **Clear Flags** should be set to "Solid Color" or "Skybox"
4. **Background** color - change this to your desired color
5. For UI-only games, you might want to set **Clear Flags** to "Don't Clear" or use a transparent background

### Option 3: Create/Replace Background Image

If you want to add a proper background:

1. **Right-click** on **Canvas** in Hierarchy
2. **UI** → **Image**
3. **Rename** to "Background"
4. **Configure RectTransform:**
   - Click anchor preset (top-left of RectTransform)
   - Hold **Alt + Shift** and click **stretch** (bottom-right)
   - Set **Left, Right, Top, Bottom** all to `0`
5. **Configure Image:**
   - **Source Image**: Drag your `background_main.jpeg` sprite
   - **Color**: White (r: 1, g: 1, b: 1, a: 1)
   - **Image Type**: Simple
6. **Move it to top** of Canvas children (drag in Hierarchy) so it renders behind everything

## Common Background Colors

- **White**: `r: 1, g: 1, b: 1, a: 1`
- **Black**: `r: 0, g: 0, b: 0, a: 1`
- **Transparent**: `r: 1, g: 1, b: 1, a: 0`
- **Light Gray**: `r: 0.9, g: 0.9, b: 0.9, a: 1`

## If You Can't Find It

1. **Select Canvas** in Hierarchy
2. **Press F** to frame it
3. In **Scene view**, look for yellow rectangles
4. Click on the yellow rectangle - it will highlight in Hierarchy
5. Check its **Image** component color

## Quick Test

To quickly test if it's a UI element:
1. **Select Canvas** in Hierarchy
2. **Uncheck** the checkbox (makes Canvas inactive)
3. If yellow disappears, it's a UI element
4. **Re-check** and search through Canvas children
