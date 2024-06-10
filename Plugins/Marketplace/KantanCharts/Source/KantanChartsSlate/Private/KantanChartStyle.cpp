#include "KantanChartStyle.h"
#include "Styling/SlateColor.h"

FKantanChartStyle::FKantanChartStyle() {
    (*this).Background.ImageSize.X = 3.200000000e+01f;
    (*this).Background.ImageSize.Y = 3.200000000e+01f;
    (*this).Background.Margin.Left = 0.000000000e+00f;
    (*this).Background.Margin.Top = 0.000000000e+00f;
    (*this).Background.Margin.Right = 0.000000000e+00f;
    (*this).Background.Margin.Bottom = 0.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).Background.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule")->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).Background.TintColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceObject")->ContainerPtrToValuePtr<UObject*>(&(*this).Background, 0)) = nullptr;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).Background, 0)) = NAME_None;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion")->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Min.X = 0.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion")->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Min.Y = 0.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion")->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Max.X = 0.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion")->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Max.Y = 0.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion")->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).bIsValid = 0;
    (*this).Background.DrawAs = ESlateBrushDrawType::Image;
    (*this).Background.Tiling = ESlateBrushTileType::NoTile;
    (*this).Background.Mirroring = ESlateBrushMirrorType::NoMirror;
    (*this).Background.ImageType = ESlateBrushImageType::NoImage;
    (*this).ChartLineColor.R = 1.000000000e+00f;
    (*this).ChartLineColor.G = 1.000000000e+00f;
    (*this).ChartLineColor.B = 1.000000000e+00f;
    (*this).ChartLineColor.A = 1.000000000e+00f;
    (*this).ChartLineThickness = 1.000000000e+00f;
    (*this).BaseFont.FontObject = nullptr;
    (*this).BaseFont.FontMaterial = nullptr;
    (*this).BaseFont.OutlineSettings.OutlineSize = 0;
    (*this).BaseFont.OutlineSettings.bSeparateFillAlpha = false;
    (*this).BaseFont.OutlineSettings.bApplyOutlineToDropShadows = false;
    (*this).BaseFont.OutlineSettings.OutlineMaterial = nullptr;
    (*this).BaseFont.OutlineSettings.OutlineColor.R = 0.000000000e+00f;
    (*this).BaseFont.OutlineSettings.OutlineColor.G = 0.000000000e+00f;
    (*this).BaseFont.OutlineSettings.OutlineColor.B = 0.000000000e+00f;
    (*this).BaseFont.OutlineSettings.OutlineColor.A = 1.000000000e+00f;
    (*this).BaseFont.TypefaceFontName = NAME_None;
    (*this).BaseFont.Size = 24;
    (*this).BaseFont.LetterSpacing = 0;
    (*this).TitleFontSize = 0;
    (*this).AxisDescriptionFontSize = 0;
    (*this).AxisValueFontSize = 0;
    (*this).FontColor.R = 1.000000000e+00f;
    (*this).FontColor.G = 1.000000000e+00f;
    (*this).FontColor.B = 1.000000000e+00f;
    (*this).FontColor.A = 1.000000000e+00f;
}

