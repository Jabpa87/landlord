using UnityEngine;
using UnityEditor;

public static class CreateCardIconCatalog
{
    const string CardsPath = "Assets/Sprites/Cards";
    const string CatalogPath = "Assets/CardIconCatalog.asset";

    [MenuItem("Assets/Create/Card Icon Catalog (and assign from Sprites/Cards)")]
    public static void CreateAndAssign()
    {
        var catalog = AssetDatabase.LoadAssetAtPath<CardIconCatalog>(CatalogPath);
        if (catalog == null)
        {
            catalog = ScriptableObject.CreateInstance<CardIconCatalog>();
            AssetDatabase.CreateAsset(catalog, CatalogPath);
        }

        SerializedObject so = new SerializedObject(catalog);
        AssignSprite(so, "chanceCard", "Chance_Card");
        AssignSprite(so, "communityChestCard", "Community_Card");
        AssignSprite(so, "getOutOfJailCard", "Get_Out_Of_Jail");
        AssignSprite(so, "skipRent", "Skiprent");
        AssignSprite(so, "goBonus", "Go_bonus");
        AssignSprite(so, "mortgageBoost", "Mortage Boost");
        AssignSprite(so, "buildDiscount", "Build Discount");
        AssignSprite(so, "rentShield", "Rent_Shield");
        AssignSprite(so, "bailDiscount", "Bail Discount");
        AssignSprite(so, "auctionEdge", "Auction Edge 20%");
        so.ApplyModifiedPropertiesWithoutUndo();
        AssetDatabase.SaveAssets();
        Selection.activeObject = catalog;
        Debug.Log("CardIconCatalog created/updated at " + CatalogPath + " with sprites from " + CardsPath);
    }

    static void AssignSprite(SerializedObject so, string propName, string fileName)
    {
        var prop = so.FindProperty(propName);
        if (prop == null) return;
        string path = CardsPath + "/" + fileName + ".png";
        var sprite = AssetDatabase.LoadAssetAtPath<Sprite>(path);
        if (sprite != null)
            prop.objectReferenceValue = sprite;
    }
}
