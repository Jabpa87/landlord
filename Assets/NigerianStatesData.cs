using UnityEngine;
using System.Collections.Generic;

// Abuja property data from Abuja_Monopoly_Finance_Table_with_Utilities_and_Transport.csv
// 22 Regular + 4 Transport + 2 Utility = 28 entries. Used by PropertyAssigner; tiles are matched by type (regular / utility / transport by name).
public static class NigerianStatesData
{
    public const int DataKindRegular = 0;
    public const int DataKindTransport = 1;
    public const int DataKindUtility = 2;

    /// <summary>
    /// Returns all 28 entries in order: 22 Regular, 4 Transport, 2 Utility.
    /// PropertyAssigner filters by dataKind and assigns to tiles by name (utility/transport/regular).
    /// </summary>
    public static List<PropertyData> GetStatesData()
    {
        var list = new List<PropertyData>();

        // ---- 22 REGULAR (from CSV rows 2-22) ----
        list.Add(MakeRegular("Gwagwalada", "Brown", 120000, 10200, 51000, 102000, 204000, 408000, 1020000, 30000, 30000, "Satellite"));
        list.Add(MakeRegular("Kuje", "Brown", 140000, 11900, 59500, 119000, 238000, 476000, 1190000, 35000, 35000, "Satellite"));
        list.Add(MakeRegular("Kubwa", "Light Blue", 180000, 15300, 76500, 153000, 306000, 612000, 1530000, 39600, 39600, "Satellite"));
        list.Add(MakeRegular("Nyanya", "Light Blue", 220000, 18700, 93500, 187000, 374000, 748000, 1870000, 48400, 48400, "Satellite"));
        list.Add(MakeRegular("Dei-Dei", "Light Blue", 260000, 22100, 110500, 221000, 442000, 884000, 2210000, 57200, 57200, "Satellite"));
        list.Add(MakeRegular("Lugbe", "Pink", 300000, 25500, 127500, 255000, 510000, 1020000, 2550000, 57000, 57000, "Mid"));
        list.Add(MakeRegular("Galadimawa", "Pink", 340000, 28900, 144500, 289000, 578000, 1156000, 2890000, 64600, 64600, "Mid"));
        list.Add(MakeRegular("Dutse-Alhaji", "Pink", 380000, 32300, 161500, 323000, 646000, 1292000, 3230000, 72200, 72200, "Mid"));
        list.Add(MakeRegular("Kurudu", "Orange", 420000, 35700, 178500, 357000, 714000, 1428000, 3570000, 67200, 67200, "Mid"));
        list.Add(MakeRegular("Mpape", "Orange", 460000, 39100, 195500, 391000, 782000, 1564000, 3910000, 73600, 73600, "Mid"));
        list.Add(MakeRegular("Wuye", "Orange", 500000, 42500, 212500, 425000, 850000, 1700000, 4250000, 80000, 80000, "Mid"));
        list.Add(MakeRegular("Jabi", "Red", 540000, 45900, 229500, 459000, 918000, 1836000, 4590000, 75600, 75600, "Mid"));
        list.Add(MakeRegular("Garki", "Red", 580000, 49300, 246500, 493000, 986000, 1972000, 4930000, 81200, 81200, "Mid"));
        list.Add(MakeRegular("Wuse", "Red", 620000, 52700, 263500, 527000, 1054000, 2108000, 5270000, 86800, 86800, "Mid"));
        list.Add(MakeRegular("Gwarimpa", "Yellow", 660000, 56100, 280500, 561000, 1122000, 2244000, 5610000, 79200, 79200, "Prime"));
        list.Add(MakeRegular("Apo", "Yellow", 690000, 58650, 293250, 586500, 1173000, 2346000, 5865000, 82800, 82800, "Prime"));
        list.Add(MakeRegular("Kado", "Yellow", 720000, 61200, 306000, 612000, 1224000, 2448000, 6120000, 86400, 86400, "Prime"));
        list.Add(MakeRegular("Utako", "Green", 740000, 62900, 314500, 629000, 1258000, 2516000, 6290000, 74000, 74000, "Prime"));
        list.Add(MakeRegular("Central Business District", "Green", 760000, 64600, 323000, 646000, 1292000, 2584000, 6460000, 76000, 76000, "Prime"));
        list.Add(MakeRegular("Banex Estate", "Green", 780000, 66300, 331500, 663000, 1326000, 2652000, 6630000, 78000, 78000, "Prime"));
        list.Add(MakeRegular("Asokoro", "Dark Blue", 790000, 67150, 335750, 671500, 1343000, 2686000, 6715000, 63200, 63200, "Prime"));
        list.Add(MakeRegular("Maitama", "Dark Blue", 800000, 68000, 340000, 680000, 1360000, 2720000, 6800000, 64000, 64000, "Prime"));

        // ---- 4 TRANSPORT (CSV Group=Transport) ----
        int[] transportRent = { 34000, 170000, 340000, 680000 };
        list.Add(MakeTransport("Nnamdi Azikiwe Airport", 400000, transportRent));
        list.Add(MakeTransport("Eagle Square Terminal", 400000, transportRent));
        list.Add(MakeTransport("Berger Motor Park", 400000, transportRent));
        list.Add(MakeTransport("Area 1 Bus Hub", 400000, transportRent));

        // ---- 2 UTILITY (CSV Group=Utility) ----
        list.Add(MakeUtility("Abuja Power Company", 300000));
        list.Add(MakeUtility("FCT Water Board", 300000));

        return list;
    }

    static PropertyData MakeRegular(string placeName, string groupId, int price,
        int baseRent, int r1, int r2, int r3, int r4, int rHotel, int houseCost, int hotelCost, string tierLabel)
    {
        return new PropertyData
        {
            dataKind = DataKindRegular,
            placeName = placeName,
            groupId = groupId,
            tierLabel = tierLabel,
            price = price,
            houseCost = houseCost,
            hotelCost = hotelCost,
            rentByLevel = new int[] { baseRent, r1, r2, r3, r4, rHotel },
            transportationRent = null
        };
    }

    static PropertyData MakeTransport(string placeName, int price, int[] transportationRent)
    {
        return new PropertyData
        {
            dataKind = DataKindTransport,
            placeName = placeName,
            groupId = "TRANSPORTATION",
            tierLabel = "",
            price = price,
            houseCost = 0,
            hotelCost = 0,
            rentByLevel = new int[6],
            transportationRent = transportationRent ?? new int[] { 34000, 170000, 340000, 680000 }
        };
    }

    static PropertyData MakeUtility(string placeName, int price)
    {
        return new PropertyData
        {
            dataKind = DataKindUtility,
            placeName = placeName,
            groupId = "UTILITY",
            tierLabel = "",
            price = price,
            houseCost = 0,
            hotelCost = 0,
            rentByLevel = new int[6],
            transportationRent = null
        };
    }
}

[System.Serializable]
public class PropertyData
{
    /// <summary>0=Regular, 1=Transport, 2=Utility</summary>
    public int dataKind;
    public string placeName;
    public string groupId;
    public string tierLabel;
    public int price;
    public int houseCost;
    public int hotelCost;
    public int[] rentByLevel;
    /// <summary>Used when dataKind=Transport: rent when owning 1,2,3,4.</summary>
    public int[] transportationRent;
}
