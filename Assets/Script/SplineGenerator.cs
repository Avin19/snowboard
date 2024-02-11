using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;

public class SplineGenerator : MonoBehaviour
{
  [SerializeField] private SpriteShapeController spriteShapeController;

  public int numberOfPoints = 150;
    public float frequency = 1f;
    public float amplitude = 1f;
    public float speed = 1f;

     private void Start()
    {
        frequency = RandomFloatGenerator();
        amplitude = RandomFloatGenerator();
        speed = RandomFloatGenerator();
        GenerateUndulation();
    }
    private float RandomFloatGenerator()
    {
        return Random.Range(1f,30f);
    }

    private void GenerateUndulation()
    {
        for (int i = 7; i < spriteShapeController.spline.GetPointCount(); i++)
        {
            // Get the original position of the pointss
            Vector3 originalPosition = spriteShapeController.spline.GetPosition(i);

            // Calculate undulation along the y-axis
            float undulation = Mathf.Sin((originalPosition.x * frequency)) * amplitude;

            // Set the new position of the point with undulation applied
            spriteShapeController.spline.SetPosition(i, new Vector3(originalPosition.x, originalPosition.y + undulation, originalPosition.z));
        }
    }
}
